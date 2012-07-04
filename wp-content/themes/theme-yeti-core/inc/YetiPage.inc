<?php
/**
 * The core Yeti page class, from which all Yeti Pages take first breath
 */

class YetiPage extends YetiCore
{
    protected $m_PageType;
    protected $m_PageFileLocation;
    
    function __construct($aPageConfig)
    {
        $this->m_PageType = $aPageConfig["Type"];
        $this->m_PageFileLocation = $aPageConfig["FileLocation"];
        
        parent::__construct();
    }
    
    public function render()
    {
        $this->renderFile($this->m_PageFileLocation);
    }

    protected function renderFile($strFileLoc)
    {
        if (file_exists($strFileLoc))
        {
            require_once($strFileLoc);
        }
        else
        {
            // Files doesn't exist. We should report this
        }
    }
}