<?php
/**
 * The core Yeti page class, from which all Yeti Pages take first breath
 */

class YetiPage extends YetiCore
{
    protected $m_PageType;
    protected $m_PageFileLocation;
    
    /**
     * Construct the yeti page, passing configuration by reference to be smart.
     * @param array $aPageConfig
     */
    function __construct(&$aPageConfig)
    {
        $this->m_PageType = $aPageConfig["PageType"];
        $this->m_PageFileLocation = $aPageConfig["FileName"];
        
        $GLOBALS["__PAGE_CONTEXT"] = $aPageConfig;
        parent::__construct();
    }
    
    /**
     * Render the page!
     */
    public function render()
    {
        $this->renderFile("pages/" . $this->m_PageType . "/" . $this->m_PageFileLocation);
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