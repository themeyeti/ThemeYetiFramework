<?php
/**
 * The core Yeti page class, from which all Yeti Pages take first breath
 */

class YetiPage extends YetiCore
{
    protected $m_BootstrapPageName;
    
    /**
     * Construct the yeti page, passing configuration by reference to be smart.
     * @param array $aPageConfig
     */
    function __construct(&$aPageConfig, &$aWebConfig)
    {
        $this->m_BootstrapPageName = $aWebConfig["BootstrapPageLocation"];
        $GLOBALS["__PAGE_CONFIG"] = &$aPageConfig;
        $GLOBALS["__WEB_CONFIG"] = &$aWebConfig;
        parent::__construct();
    }
    
    /**
     * Render the page!
     */
    public function render()
    {
        $this->renderFile($this->m_BootstrapPageName);
    }
    
    /**
     * Actually include the page we're rendering
     * @param unknown_type $strFileLoc
     */
    private function renderFile($strFileLoc)
    {
        require_once($strFileLoc);
    }
}