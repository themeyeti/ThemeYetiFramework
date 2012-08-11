
<?php 
global $__PAGE_CONFIG, $__WEB_CONFIG;

// Load our global CSS files
if (isset($__WEB_CONFIG["CSS"])) 
{
?>
    <!-- Load up the core yeti CSS -->

<?php
    foreach ($__WEB_CONFIG["CSS"] as $aCSS)
    { 
        yeti_core_load_css_file($aCSS);
    }
}

// Load our framework specific CSS
if (isset($__WEB_CONFIG["Framework"]["CSS"])) 
{
?>
    <!-- Load up the framework CSS -->
<?php
    foreach ($__WEB_CONFIG["Framework"]["CSS"] as $aCSS)
    { 
        yeti_core_load_css_file($aCSS);
    }
}
?>

<?php 
if (isset($__PAGE_CONFIG["CSS"])) 
{
?>
    <!-- Load up the page and plugin specific CSS -->

<?php
    foreach ($__PAGE_CONFIG["CSS"] as $aCSS)
    {
        yeti_core_load_css_file($aCSS);
    }
}

/**
 * Loads CSS file from a CSS array. It parses any comments, conditionals, etc.,
 * and outputs a <link> directly onto the page
 * @aCSS array
 */
function yeti_core_load_css_file($aCSS)
{
    $strCSSLink = "\n";
    // Let's include an HTML comment if one was provided
    if (isset($aCSS["comment"])) 
    { 
        $strCSSLink .= "    <!-- " . 
            $aCSS["comment"] .
            " -->\n";
    }
    
    // Let's give it a tab
    $strCSSLink .= "    ";
    
    // Now check if this has a conditional
    if (isset($aCSS["conditional"]))
    {
        $strCSSLink .= "<!--" .
            $aCSS["conditional"] .
            ">";
    }
    
    // Now let's actually render it
    $strCSSLink .= "<link rel=\"stylesheet\" type=\"text/css\"" .
        " media=\"" . 
        $aCSS["media"] .
        "\" href=\"" . 
        $aCSS["href"] .
        "\" />";

    // Let's close the conditional, if any
    if (isset($aCSS["conditional"]))
    {
        $strCSSLink .= "<![endif]-->";
    }
    $strCSSLink .= "\n";
    echo $strCSSLink;
}
