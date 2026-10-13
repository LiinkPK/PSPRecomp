/* Entry 0x0890CB48 | file offset 0x00109B20 | FUN_0890cb48 | bytes 140 */

void FUN_0890cb48(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  
  local_14 = 0;
  puVar1 = (undefined4 *)0x0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    puVar1 = (undefined4 *)(param_1 + *(int *)(param_1 + 0x3c) * 8 + 0x14);
  }
  if (puVar1 == (undefined4 *)0x0) {
    local_18 = 0xffffffff;
    local_1c = 0;
  }
  else {
    local_18 = *puVar1;
    local_1c = puVar1[1];
  }
  local_20 = param_3;
  FUN_0890569c(param_1,param_2,&local_20,0x10);
  return;
}

