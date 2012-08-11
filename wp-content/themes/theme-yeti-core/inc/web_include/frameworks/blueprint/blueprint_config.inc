<?php
global $__YETI_CONFIG;

$aBlueprintConfig = array();

$strBlueprintRoot = get_bloginfo('template_url') .
    "/inc/web_include/frameworks/blueprint/";
$aBlueprintConfig["BlueprintRoot"] = $strBlueprintRoot;
unset ($strBlueprintRoot);

/**********************************
 * CSS
 *********************************/

$aBlueprintCSS = array(
    "screen" => array(
        "comment" => "Core Blueprint Framework CSS",
        "href" => $aBlueprintConfig["BlueprintRoot"] .
            "components/styles/blueprint-screen.css",
        "media" => "screen, projection"
    ),
    "print" => array(
        "comment" => "Blueprint Print CSS",
        "href" => $aBlueprintConfig["BlueprintRoot"] .
            "components/styles/blueprint-print.css",
        "media" => "print"
    ),
    "ie" => array(
        "comment" => "Blueprint IE Fixes",
        "href" => $aBlueprintConfig["BlueprintRoot"] .
            "components/styles/blueprint-ie.css",
        "media" => "screen, projection",
        "conditional" => "[if lt IE 8]"
        )
    );

$aBlueprintConfig["CSS"] = $aBlueprintCSS;


$GLOBALS["__YETI_CONFIG"]["__WEB"]["Framework"] = $aBlueprintConfig;