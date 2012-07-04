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
        if(!isset($GLOBALS['__YETI_CONTEXT']) && $GLOBALS['__YETI_CONTEXT']['DidLoad'] !== true)
        {
            $this->loadConfig();
        }
    }
    protected function loadConfig()
    {
        // Load the configuration. . .
        require_once('YetiConfig.inc');
    }
}