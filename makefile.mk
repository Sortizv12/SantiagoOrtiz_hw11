pos.png : tray.txt SO_graphs.py
	python SO_graphs.py
tray.txt : SO_gravity.cpp	
	g++ SO_gravity.cpp
	./a.out
