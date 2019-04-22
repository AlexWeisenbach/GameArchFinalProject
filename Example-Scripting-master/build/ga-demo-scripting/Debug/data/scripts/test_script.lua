function update(component, frame_params, current_number)
	math.randomseed(os.time())
 	local rand = math.random()--Random walk script
 	if rand<.5 then
 		entity = component_get_entity(component)
 		newNumber = current_number + 1
 		return_sound_value(entity, newNumber)
 	else
 		entity = component_get_entity(component)
 		newNumber = current_number - 1
 		return_sound_value(entity, newNumber)
 	end
end