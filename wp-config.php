<?php
/**
 * The base configurations of the WordPress.
 *
 * This file has the following configurations: MySQL settings, Table Prefix,
 * Secret Keys, WordPress Language, and ABSPATH. You can find more information
 * by visiting {@link http://codex.wordpress.org/Editing_wp-config.php Editing
 * wp-config.php} Codex page. You can get the MySQL settings from your web host.
 *
 * This file is used by the wp-config.php creation script during the
 * installation. You don't have to use the web site, you can just copy this file
 * to "wp-config.php" and fill in the values.
 *
 * @package WordPress
 */

// ** MySQL settings - You can get this info from your web host ** //
/** The name of the database for WordPress */
define('DB_NAME', 'wp_yeti');

/** MySQL database username */
define('DB_USER', 'yeti_user');

/** MySQL database password */
define('DB_PASSWORD', '4r5t^Y&U');

/** MySQL hostname */
define('DB_HOST', 'localhost');

/** Database Charset to use in creating database tables. */
define('DB_CHARSET', 'utf8');

/** The Database Collate type. Don't change this if in doubt. */
define('DB_COLLATE', '');

/**#@+
 * Authentication Unique Keys and Salts.
 *
 * Change these to different unique phrases!
 * You can generate these using the {@link https://api.wordpress.org/secret-key/1.1/salt/ WordPress.org secret-key service}
 * You can change these at any point in time to invalidate all existing cookies. This will force all users to have to log in again.
 *
 * @since 2.6.0
 */
define('AUTH_KEY',         '/$I$lie{qxh6xj``or.iTjn&1DRD1PW%yw5eX}{?CDmv8T>+nz!<[/<~mY$kW)jV');
define('SECURE_AUTH_KEY',  '$dA_,-o[97x5[l|; UI!{+M<8&C(u`e1_3w;~ZCFJ3*lFuYC9w+9lSVeJ60>BYKQ');
define('LOGGED_IN_KEY',    'nzNgl+-@`xqw}`nFRaO3*$_!GYDCGf[MunO.gq5],;^,m8~G<Dz 2>UVdCET34D<');
define('NONCE_KEY',        't<bbnD1E={~w5jBN,c:9vm]JM?`j/x?]%HvAcdv5-e+3xJ)R|BV:5oRD%Fc?fb}W');
define('AUTH_SALT',        ',I?wjy*w0-taQ5L5MJ9UG/Ka!b4v:TXLUXj!2;7bbQ2GLuWhkYRT`z7Ey; Z;b0B');
define('SECURE_AUTH_SALT', '-&E<]_:f`.U}/v%0S.A-9h2<L!$H8D6kZ)5TFy>!Qer(%ozxXv.qBH;rpsaCS(rT');
define('LOGGED_IN_SALT',   '1a9P6>Eet0Ks:y<`gVp}n^2d2^L&d`QupK_68z@(z?{TP@K:c-),L*UF9#d2oa#R');
define('NONCE_SALT',       '?8_OT}q_z6eV-`C]R.mJNpvdDGYdJO_!P}jeIyJ;ZUNl2lbu+2se=m{K}BS$]/Ov');

/**#@-*/

/**
 * WordPress Database Table prefix.
 *
 * You can have multiple installations in one database if you give each a unique
 * prefix. Only numbers, letters, and underscores please!
 */
$table_prefix  = 'wpty_';

/**
 * WordPress Localized Language, defaults to English.
 *
 * Change this to localize WordPress. A corresponding MO file for the chosen
 * language must be installed to wp-content/languages. For example, install
 * de_DE.mo to wp-content/languages and set WPLANG to 'de_DE' to enable German
 * language support.
 */
define('WPLANG', '');

/**
 * For developers: WordPress debugging mode.
 *
 * Change this to true to enable the display of notices during development.
 * It is strongly recommended that plugin and theme developers use WP_DEBUG
 * in their development environments.
 */
define('WP_DEBUG', true);

/* That's all, stop editing! Happy blogging. */

/** Absolute path to the WordPress directory. */
if ( !defined('ABSPATH') )
	define('ABSPATH', dirname(__FILE__) . '/');

/** Sets up WordPress vars and included files. */
require_once(ABSPATH . 'wp-settings.php');

