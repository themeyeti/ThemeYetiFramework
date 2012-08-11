<?php
/**
 * Yeti Core
 * Here we spawn the Yetis. It loads up configuration and other info and
 * puts it into context.
 * 
 * @package ThemeYeti
 * @subpackage Core
 */

class YetiCore
{
    function __construct()
    {
        if(!isset($GLOBALS['__YETI_CONFIG']) && $GLOBALS['__YETI_CONFIG']['DidLoad'] !== true)
        {
            $this->loadConfig();
        }
    }
    protected function loadConfig()
    {
        global $__YETI_CONFIG;
        // Load the core configuration. . .
        require_once('YetiConfig.inc');
        // Which tells us where the framework configuration lives
        require_once($__YETI_CONFIG["__WEB"]["WebFrameworkConfig"]);
    }
}