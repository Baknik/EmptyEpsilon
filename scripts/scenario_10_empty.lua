-- Name: Empty space
-- Description: Empty scenario, no enemies, no friendlies, only a lonely station. Can be used by a GM player to setup a scenario in the GM screen.

function init()
	--SpaceStation():setPosition(1000, 1000):setTemplate('Small Station'):setFaction("Human Navy"):setRotation(random(0, 360))
	--SpaceStation():setPosition(-1000, 1000):setTemplate('Medium Station'):setFaction("Human Navy"):setRotation(random(0, 360))
	--SpaceStation():setPosition(1000, -1000):setTemplate('Large Station'):setFaction("Human Navy"):setRotation(random(0, 360))
	--SpaceStation():setPosition(-1000, -1000):setTemplate('Huge Station'):setFaction("Human Navy"):setRotation(random(0, 360))
	PlayerSpaceship():setFaction("Human Navy"):setTemplate("Player Cruiser"):setRotation(200)
	Nebula():setPosition(-5000, 0)
end

function update(delta)
	--No victory condition
end
