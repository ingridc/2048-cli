# Translation in other languages

1. Create a language specific directory structure in /po.
	
  For example, for the French language you should write:
~~~
	mkdir po/fr
	mkdir po/fr/LC_MESSAGES
~~~

2. Generate the .po file. This file will contain all the texts to be translated.
	
  To generate this file, write the following sentence:
~~~  
	msginit -l fr_FR -o po/fr/LC_MESSAGES/2048.po -i po/2048.pot
~~~

3. Once the .po file is generated, proceed to translate all the texts.
	
  For example, to translate the text "Do you want to reset the score?" to "Voulez-vous redémarrer le score?":
~~~  
	msgid "Do you want to restart the score?"
	msgstr "Voulez-vous redémarrer le score?"
~~~

4. Finally, you must generate the .mo file in the directory /po/fr/LC_MESSAGES with the sentence:
~~~	
  msgfmt -c -v -o po/fr/LC_MESSAGES/2048.mo po/fr/LC_MESSAGES/2048.po
~~~  
