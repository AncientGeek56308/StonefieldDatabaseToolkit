* Error messages.

#define ccERR_TABLE_NOT_OPEN    '<Insert1> no est� abierta.'
#define ccERR_TABLE_NOT_FOUND   '<Insert1> no es parte de la base de datos.'
#define ccERR_NO_EXTENSIONS     'Las extensiones de Stonefield definidas para <Insert1> est�n incompletas - <Insert2>.'
#define ccERR_NO_TABLE_SELECTED 'No se especific� ninguna tabla.'
#define ccERR_TABLE_IN_DBC      '<Insert1> ya se encuentra en la base de datos.'
#define ccERR_TABLE_IN_META     '<Insert1> ya se encuentra en la definici�n de datos.'
#define ccERR_INVALID_PROPERTY  '<Insert1> no es un campo v�lido de la base de datos.'
#define ccERR_FILE_EXISTS       '<Insert1> ya existe.'
#define ccERR_INDEX_EXISTS      'Ya hay un �ndice con ese nombre.'
#define ccERR_FIELD_EXISTS      'Ya hay un campo con ese nombre.'
#define ccERR_FILE_IN_USE		'El archivo ya est� en uso.'
#define ccERR_TOO_MANY_FILES	'Hay demasiados archivos abiertos.'
#define ccERR_TAG_NOT_FOUND     'La etiqueta de �ndice <Insert1> no se encontr�.'
#define ccERR_NO_TABLES         'No hay tablas que procesar.'
#define ccERR_CANT_OPEN_EXCL    '<Insert1> no se puede abrir en modo exclusivo.'
#define ccERR_NOT_OPEN_EXCL     '<Insert1> debe ser abierta en modo exclusivo.'
#define ccERR_OUT_OF_MEMORY     'No hay suficiente memoria.'
#define ccERR_INDEX_INVALID     'La etiqueta <Insert1> no es v�lida.'
#define ccERR_IDX_EXPR_INVALID  'La expresi�n de �ndice no es v�lida.'
#define ccERR_FILTER_TOO_LONG   'La expresi�n del filtro es demasiado larga.'
#define ccERR_CANT_REINDEX      '<Insert1> no se pudo reindexar - <Insert2>.'
#define ccERR_DBC_NOT_OPEN      'La base de datos no est� abierta como una tabla.'
#define ccERR_NO_PHDBASE        'Se necesita PHDBASE para crea el �ndice <Insert1> de <Insert2>, pero no se pudo cargar.'
#define ccERR_BELONG_ANOTHER    'Esta tabla pertenece a otra base de datos.'
#define ccERR_INVALID_DBCXPROPS 'Nombre de propiedad de cursor no v�lido.'
#define ccERR_CANT_UPDATE_ID    'No se pudo actualizar el ID del �ltimo registro utilizado.'
#define ccERR_CANT_ADD_META     'No tiene permisos para a�adir una tabla de los meta datos a <Insert1>.'
#define ccERR_INVALID_DEMO      'La versi�n demo de Stonefield Database Toolkit s�lo se puede utilizar con la base de datos de muestra.'
#define ccERR_INVALID_COLLATE   'Esta p�gina de c�digos no soporta la secuencia de ordenaci�n <Insert1> utilizada por la etiqueta <Insert2>.'
#define ccERR_NOT_UPDATED       'Hubo un problema actualizando esta tabla. No se cambi� su estructura.'
#define ccERR_VCX_NOT_EXIST     'La librer�a de clases para el campo <Insert1> (<Insert2>) no existe.'
#define ccERR_CANT_SAVE_PREF    'Hubo un problema al salvar las propiedades.'
#define ccERR_CANT_DEF_PREF     'Ha habido un problema registrando las propiedades por defecto.'
#define ccERR_CANT_EDIT_PROP    'Los meta datos de SDT no se pudieron abrir de forma exclusiva, por lo que no puede a�adir, editar, o quitar propiedades extendidas ahora.'
#define ccERR_NO_TABLES_IN_DIR  'No hay tablas en esa carpeta.'
#define ccERR_WORD_NOT_FOUND    'No se pudo encontrar Microsoft Word.'
#define ccERR_WORD_DOC_OPEN     'Ya hay un documento con el mismo nombre abierto en Word.'
#define ccERR_WORD_BUSY         'Word est� ocupado en estos momentos.'
#define ccERR_WORD_NO_BOOKMARK  'El template para este informe ha sido modificado y el bookmark ya no existe.'
#define ccERR_WORD_NOT_STARTED  'No se pudo iniciar Microsoft Word.'
#define ccERR_WORD_UNKNOWN_NAME 'Hay un problema en los comandos de VBA enviados a Word.'
#define ccERR_WORD_CLOSED       'Se cerr� Word, por lo que se abrir� de nuevo.'
#define ccERR_BAD_FIELD_REP_DIR 'La carpeta para el Field Repository definada en las propiedades de SDT tiene un conflicto with con los meta datos para la base de datos activa. Por favor, edite esta propiedad en la pantalla de propiedades de SDT.'
#define ccERR_NO_FIELD_REP_DIR  'No se defini� la carpeta para el Field Repository. Por favor, edite esta propiedad en la pantalla de propiedades de SDT.'
#define ccERR_ALIAS_IN_USE      'Ya hay un cursor abierto con este alias.'
#define ccERR_INVALID_FILENAME  'Por favor, introduzca un nombre de archivo v�lido.'
#define ccERR_MUST_REDEFINE     'La vista <Insert1> debe ser redefinida.  Para hacerlo, seleccione la vista en el Explorador de bases de datos de SDT y haga click en el bot�n Redefinir.'
#define ccERR_INVALID_VIEW      'La vista <Insert1> no es v�lida: <Insert2>'
#define ccERR_COPY_PROP_LEN     '<Insert1> no se pudo copiar: una de sus propiedades supera los 254 caracteres'
#define ccERR_CANT_PROCESS_FREE 'Este m�todo no se puede utilizar para tablas libres.'
#define ccERR_INVALID_FIELD     '<Insert1> no es un nombre de archivo v�lido.'
	* new in SDT 6.0c
#define ccERR_REQUEST_CANCELED  'La petici�n fue cancelada.'
	* new in SDT 6.1

* Display messages.

#define ccMSG_TITLE             'Explorador de datos de Stonefield'
#define ccMSG_READONLY          '[S�lo lectura]'
#define ccMSG_CREATING          'Creando <Insert1>...'
#define ccMSG_UPDATING          'Actualizando <Insert1>...'
#define ccMSG_REMOVING          'Eliminando <Insert1>...'
#define ccMSG_COPYING           'Copiando <Insert1>...'
#define ccMSG_MOVING            'Moviendo <Insert1>...'
#define ccMSG_PACKING           'Empaquetando <Insert1>...'
#define ccMSG_REINDEXING        'Reindexando <Insert1>...'
#define ccMSG_REPAIRING         'Reparando <Insert1>...'
#define ccMSG_PROCESSING        'Procesando <Insert1>...'
#define ccMSG_CHECKING          'Comprobando <Insert1>...'
#define ccMSG_REDEFINING        'Redefiniendo la vista <Insert1>...'
#define ccMSG_UPDATING_LINKED   'Actualizando campos enlazados...'
#define ccMSG_OPEN_DATABASE     'Base de datos:'
#define ccMSG_COPYRIGHT         '(c) 1996-2004 Stonefield Systems Group Inc.'
#define ccMSG_RETR_EXT_PROP     'Obteniendo propiedades extendidas...'
#define ccMSG_UPD_EXT_PROP      'Actualizando propiedades extendidas...'
#define ccMSG_UPDATING_META     'Actualizando la estructura de las tablas de los meta datos...'
#define ccMSG_OPENING           'Abriendo <Insert1>...'
#define ccMSG_RECORDS_TOTAL     '<Insert1>   registros totales'
#define ccMSG_DOING_INDEX       'Indexando <Insert1> de <Insert2>'
#define ccMSG_RENAME_EDITS      'Los siguientes objetos se tienen que editar ya que sus propiedades hacen referencia al nombre anterior <Insert1> (<Insert2>):'
#define ccMSG_REMOVE_EDITS      'Los siguientes objetos se tienen que editar ya que sus propiedades hacen referencia a <Insert1>:'
#define ccMSG_RENAME_FIELD      'Renombrando el campo...'
#define ccMSG_REPAIR            'Reparar'
#define ccMSG_REINDEX           'Reindexar'
#define ccMSG_PROGRESS          'Progreso'
#define ccMSG_LOCATE            '<Insert1>:'
#define ccMSG_OPEN              'Abrir'
#define ccMSG_PLEASE_WAIT       'Por favor espere...'
#define ccMSG_PRINTING          'Imprimiendo documentaci�n...'
#define ccMSG_DIRECTORY         'Seleccione carpeta'
#define ccMSG_READING_DBC       'Leyendo los objetos de la base de datos...'
#define ccMSG_UPDATING_VIEW     'Actualizando las propiedades de los campos de la vista...'
#define ccMSG_ERR_ON_CLIPBOARD  'El mensaje de error se envi� al Portapapeles.'
#define ccMSG_COPY_TABLE_FROM   'Copiar <Insert1> A'

* Captions and labels.

#define ccFRM_SDT_CAPTION       'Explorador de Datos de StoneField'
#define ccFRM_TD_CAPTION        'Dise�ador de Tablas de StoneField - '
#define ccFRM_PROPS_CAPTION     'Otras <Insert1> Propiedades'
#define ccFRM_PREF_CAPTION      'Propiedades del Explorador de Datos de StoneField'
#define ccFRM_SYSDOC_CAPTION    'Documentaci�n de la base de datos'
#define ccFRM_IDXWIZ_CAPTION    'Asistente de �ndices'
#define ccFRM_NOTIFY_CAPTION    'Nota'
#define ccFRM_SELDBC_CAPTION    'Seleccione Base de Datos'
#define ccFRM_NEW_PROP_CAPTION  'Nueva Propiedad'
#define ccFRM_EDIT_PROP_CAPTION 'Editar Propiedad'
#define ccFRM_TD_RECORDS        'Registros:  <Insert1>'
#define ccFRM_TD_FIELDS         'Campos:  <Insert1>'
#define ccFRM_TD_LENGTH         'Longitud:  <Insert1>'
#define ccFRM_SORT_ORDER        'Ordenaci�n'
#define ccFRM_TD_DEF_CLASS      '<Defecto>'
#define ccFRM_NEW_VIEW_CAPTION  'Nueva vista'
	* new in SDT 6.0
#define ccCAP_MODIFY            'Modificar <Insert1>'
	* new in SDT 6.0
#define ccCAP_BROWSE            'Examinar <Insert1>'
	* new in SDT 6.0
#define ccCAP_COPY              'Copiar <Insert1>'
	* new in SDT 6.0
#define ccCAP_CREATE            'Crear nuevo <Insert1>'
	* new in SDT 6.0
#define ccCAP_ADD               'A�adir <Insert1>'
	* new in SDT 6.0
#define ccCAP_ADD_TO_META_DATA  'A�adir <Insert1> a los meta datos'
	* new in SDT 6.0
#define ccCAP_ADD_TO_DBC        'A�adir <Insert1> a la base de datos'
	* new in SDT 6.0
#define ccCAP_BATCHADD_META     'A�adir por lotes <Insert1> a los meta datos'
	* new in SDT 6.0
#define ccCAP_BATCHADD_DBC      'A�adir por lotes <Insert1> a la base de datos'
	* new in SDT 6.0
#define ccCAP_REMOVE_META_DATA  'Quitar <Insert1> de los meta datos'
	* new in SDT 6.0
#define ccCAP_REMOVE_DBC        'Quitar <Insert1> de la base de datos'
	* new in SDT 6.0
#define ccCAP_REDEFINE_VIEW     'Redefinir vista'
	* new in SDT 6.0
#define ccCAP_REDEFINE_ALL_VIEWS 'Redefinir todas las vistas en la base de datos'
	* new in SDT 6.0

* Questions.

#define ccQST_REMOVE_TABLE      '�Quiere eliminar <Insert1> y todas las vistas y relaciones que dependen de ella en la base de datos?'
#define ccQST_REMOVE_FREE_TABLE '�Quiere eliminar <Insert1> de los meta datos?'
#define ccQST_NOT_EXCLUSIVE     'No se pudo abrir <Insert1> en modo exclusivo. �Le gustar�a abrirlo en modo de s�lo-lectura?'
#define ccQST_NO_EXTENSIONS     'No se han definido extensiones de Stonefield para <Insert1>. �Desea crearlas?'
#define ccQST_REMOVE_REL_INDEX  'El �ndice <Insert1> est� involucrado en una o m�s relaciones, y al elminarlo se eliminar�n las mismas. �Est� seguro que quiere quitarlo?'
#define ccQST_REMOVE_INDEX      '�Quiere eliminar el �ndice <Insert1>?'
#define ccQST_REMOVE_FIELD      '�Quiere eliminar el Campo <Insert1>?'
#define ccQST_REMOVE_EXT_PROP   '�Quiere eliminar esta propiedad extendida?'
#define ccQST_REMOVE_IDX_FIELD  'El campo <Insert1> est� relacionado con uno o m�s �ndices. Al eliminarlo tambi�n se eliminar�n los �ndices y las relaciones basadas en esos �ndices. �Est� seguro que quiere quitarlo?'
#define ccQST_EXIT_NO_SAVE      '�Salir sin guardar los cambios?'
#define ccQST_MOVE_TABLE        'Al mover <Insert1> se eliminar�n todas las vistas y relaciones basadas en la tabla. �Desea continuar y moverla?'
#define ccQST_VALIDATE          'Validar los meta datos puede ser un proceso largo. �Est� seguro de que quiere hacerlo?'
#define ccQST_REDEFINE_VIEW     'La vista <Insert1> debe ser redefinida. �Quiere hacerlo ahora?'
#define ccQST_ADJUST_VIEW       'Le gustar�a ajustar las referencias a tablas de esta vista para que apunten a tablas en esta base de datos (S�) o que se dejen tal cual apuntando a las tablas en la base de datos original (No)?'
#define ccQST_NO_META_DATA      'No hay tablas de meta datos en el directorio se�alado. �Desea crearlas (S�), quitar el directorio de la lista registrada (No), o no hacer nada (Cancelar)?'
	* new in SDT 6.0c

* Report constants.

#define ccREP_TOT_SIZE          'Tama�o del registro:'
#define ccREP_SYSTEM            'Sistema:'
#define ccREP_DATABASE          'Base de Datos:'
#define ccREP_TABLE             'Tabla:'
#define ccREP_PATH              'Ruta:'
#define ccREP_CAPTION           'T�tulo:'
#define ccREP_COMMENTS          'Comentarios:'
#define ccREP_VALID_RULE        'Regla:'
#define ccREP_VALID_TEXT        'Mensaje:'
#define ccREP_INS_TRIGGER       'Desencadenador Insert:'
#define ccREP_UPD_TRIGGER       'Desencadenador Update:'
#define ccREP_DEL_TRIGGER       'Desencadenador Delete:'
#define ccREP_PRIMARY_KEY       'Clave primaria:'
#define ccREP_CODEPAGE          'P�gina de C�digos:'
#define ccREP_BATCHUPDATECOUNT  'BatchUpdateCount:'
#define ccREP_COMPAREMEMO       'CompareMemo:'
#define ccREP_CONNECTNAME       'ConnectName:'
#define ccREP_FETCHASNEEDED     'FetchAsNeeded:'
#define ccREP_FETCHMEMO         'FetchMemo:'
#define ccREP_FETCHSIZE         'FetchSize:'
#define ccREP_MAXRECORDS        'MaxRecords:'
#define ccREP_OFFLINE           'Offline:'
#define ccREP_PARAMETERLIST     'ParameterList:'
#define ccREP_PREPARED          'Prepared:'
#define ccREP_SENDUPDATES       'SendUpdates:'
#define ccREP_SHARECONNECTION   'ShareConnection:'
#define ccREP_SQL               'SQL:'
#define ccREP_TABLES            'Tablas:'
#define ccREP_UPDATETYPE        'Actualizar con:'
#define ccREP_UPDATE            'SQL UPDATE'
#define ccREP_DELETETHENINSERT  'SQL DELETE e INSERT'
#define ccREP_USEMEMOSIZE       'UseMemoSize:'
#define ccREP_WHERETYPE         'La cla�sula SQL WHERE incluye:'
#define ccREP_KEYFIELDSONLY     'S�lo campos clave'
#define ccREP_KEYANDUPDATABLE   'Campos clave y actualizables'
#define ccREP_KEYANDMODIFIED    'Campos clave y modificados'
#define ccREP_KEYANDTIMESTAMP   'Clave y marca de hora'
#define ccREP_INPUTMASK         'M�scara de entrada:'
#define ccREP_FORMAT            'Formato:'
#define ccREP_DEFAULT           'Defecto:'
#define ccREP_DISPLAYCLASS      'Mostrar clase:'
#define ccREP_CLASSLIBRARY      'Mostrar biblioteca:'
#define ccREP_EXPRESSION        'F�rmula:'
#define ccREP_FILTER            'Filtro:'
#define ccREP_COLLATE           'Ordenaci�n:'
#define ccREP_VIEWTYPE          'Tipo de vista:'
#define ccREP_KEYFLD            'Campo clave:'
#define ccREP_UPDATABLE         'Actualizable:'
#define ccREP_UPDATENAME        'Update name:'
#define ccREP_CALCULATION       'C�lculo:'

* Miscellaneous constants.

#define ccMENU_BAR_PROMPT_SDT   iif(version(5) >= 800, 'Explorador de Datos de Stone\<field', 'E\<xplorador de Datos de Stonefield')
	* Prompt for the pad in the menu bar
#define ccMENU_BAR_PROMPT_PREF  'Prop\<iedades de SDT...'
	* Prompt for the Properties pad in the menu bar
#define ccALL                   'ALL'
	* "ALL" passed to Reindex or Update
#define ccUNTITLED              'Sin t�tulo'
	* string returned by GETFILE() when New is selected
#define ccDELETED_TAG_COMMENT   'Esta etiqueta de �ndice mejora el rendimiento de Rushmore.'
#define ccMETA_TABLE            'meta table'
#define ccLOCAL                 'Local'
#define ccREMOTE                'Remote'
#define ccUNKNOWN               'Desconocido'

* Other prompts.

#define ccMETA_DATA             'meta datos'
	* new in SDT 6.0
#define ccTABLES_PROPER         'Tablas'
#define ccDATABASE_PROPER       'Base de Datos'
#define ccDATABASE_LOWER        'base de datos'
	* new in SDT 6.0
#define ccDATABASES             'Bases de datos'
#define ccDATABASES_LOWER       'base de datos'
	* new in SDT 6.0
#define ccLOADING               'Cargando...'
#define ccTABLES                'tablas'
#define ccTABLE                 'Tabla'
#define ccTABLE_LOWER           'tabla'
	* new in SDT 6.0
#define ccVIEW                  'Vista'
#define ccVIEWS_PROPER          'Vistas'
#define ccVIEW_LOWER            'vista'
	* new in SDT 6.0
#define ccTABLE_OR_VIEW         'tabla o vista'
	* new in SDT 6.0
#define ccINDEXES               '�ndices'
#define ccFIELD_PROPER          'Campo'
#define ccUSER_PROPER           'Definido-por-Usuario'
#define ccINDEX_PROPER          '�ndice'
#define ccRELATIONS             'relaciones'
#define ccDATABASE              'base de datos'
#define ccTHIS_TABLE            'esta tabla'
#define ccRENAMED_FIELDS        'los siguientes campo(s)'
#define ccPACK                  'Empaquetar'
#define ccALL_TABLES            'Todas las Tablas'
#define ccCANCEL                'Cancelar'
#define ccDEBUG                 'Depurar'
#define ccCONTINUE              'Continuar'
#define ccSELECT                'Selecccionar'
#define ccLIBRARY               'Field Repository'
#define ccFREE_TABLES           'Tablas Libres'
#define ccFREE_TABLE            'Tabla Libre'
#define ccFREE_TABLE_LOWER      'tabla libre'
	* new in SDT 6.0
#define ccFREE_TABLES_LOWER     'tablas libres'
	* new in SDT 6.0
#define ccBROWSE                'Examinar'
#define ccLIST                  'Listar'
#define ccYES                   'S�'
#define ccNO                    'No'
#define ccOBJECT                'objeto'
#define ccOBJECTS               'objetos'

* Error message strings (besides those found in DBCXMGR.H).

#define ccMSG_CODE              'C�digo:'
#define ccMSG_OBJECT            'Objeto:'
