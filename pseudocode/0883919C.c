/* Entry 0x0883919C | file offset 0x00036174 | FUN_0883919c | bytes 160 */

void FUN_0883919c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  int local_c;
  
  local_10 = (undefined4 *)0x0;
  local_c = param_1;
  puVar1 = (undefined4 *)FUN_088312d0(param_1,0x30);
  puVar2 = local_10;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1;
  }
  *(undefined4 **)(local_c + 0x4a8) = puVar2;
  *puVar2 = 0x3f000000;
  puVar2[1] = 0x3f800000;
  puVar2[2] = 0x3f800000;
  puVar2[3] = 0x41200000;
  local_20 = 0;
  local_1c = 0x3f000000;
  local_18 = 0;
  local_14 = 0x3f800000;
  FUN_089a3868(puVar2 + 4,&local_20);
  puVar2[8] = 0;
  return;
}

