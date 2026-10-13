/* Entry 0x08992F04 | file offset 0x0018FEDC | FUN_08992f04 | bytes 76 */

void FUN_08992f04(int param_1)

{
  undefined4 local_80;
  undefined1 local_7c;
  undefined4 local_78;
  
  local_80 = DAT_089da444;
  local_7c = 2;
  local_78 = 0;
  if (param_1 != 0) {
    DAT_089da444 = &local_80;
    FUN_08934b18();
  }
  DAT_089da444 = (undefined4 *)local_80;
  return;
}

