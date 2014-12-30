#include "license_policy.h"

license_policy::license_policy(){}

~license_policy::license_policy(){}

license_policy::get_instance()
{
	if(_instace == null)
	{
		license_policy lpolicy;
		_instance = lpolicy;
	}
	return _instance;
}

short license_policy::acquire_license(string new_key){ return 0; }

short license_policy::release_other_license_key(string key){ return 0; }

short license_policy::release_local_license(){ return 0; }