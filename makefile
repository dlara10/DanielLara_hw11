pos.png vel.png phase.png : DL_graph.py tray.txt
	python DL_graph.py
tray.txt : gravity
	./gravity > tray.txt
gravity:
	c++ DL_gravity.cpp -o gravity
