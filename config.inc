<?php
	define('HOST', '127.0.0.1');
	define('DATABASE', 'knpapp');
	define('USER', 'root');
	define('PASSWORD', 'admin');

	define('HOME_URL', 'http://'. $_SERVER['HTTP_HOST']);
	define('BASE_URL', 'http://'. $_SERVER['SERVER_NAME'] .'/homepage');
	define('HTTP_HOST_ROOT', 'http://'. $_SERVER['HTTP_HOST']);
	define('HTTP_HOST', 'http://'. $_SERVER['HTTP_HOST'] .'/homepage');
	define('URL', $_SERVER['REQUEST_URI']);
	define('ROOT_PATH', $_SERVER['DOCUMENT_ROOT']);

	date_default_timezone_set("Asia/Bangkok");
?>