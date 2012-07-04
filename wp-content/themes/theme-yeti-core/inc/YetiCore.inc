<?php
/**
 * Yeti Core
 * Here we spawns the Yetis. It loads up configuration and other info and
 * puts it into context.
 * 
 * @package ThemeYeti
 * @subpackage Core
 */

class YetiCore
{
    function __construct()
    {
        global $YETI_CONTEXT;
        // TODO: load configuration from Yeti Config
        $aConfiguration = array(
            "PAGES" => array(
                "INDEX" => array(
                    "Type" => "index",
                    "FileLocation" => "inc/pages/index/DefaultIndex.inc",
                        )
                    ),
                );
        array_push($YETI_CONTEXT["CONFIG"], $aConfiguration);
    }
}