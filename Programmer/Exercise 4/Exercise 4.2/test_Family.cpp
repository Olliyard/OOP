#include "Person.h"
#include "Family.h"

int main()
{
	Person dad("111111-1111", "Dad", "Daddy", "McDadson");
	Person mum("222222-2222", "Mum", "Mummy", "MisMummy");
	Person son("333333-3333", "Son", "Sonny", "McDadson");
	Person daughter("444444-4444", "Daughter", "Daughter", "MisMummy");

	Family McDadson(&dad, &mum, &son, &daughter);
}