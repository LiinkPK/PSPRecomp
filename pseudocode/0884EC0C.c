/* Entry 0x0884EC0C | file offset 0x0004BBE4 | FUN_0884ec0c | bytes 144 */

void FUN_0884ec0c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  puVar1 = (undefined4 *)param_1[1];
  if (puVar1 != (undefined4 *)0x0) {
    FUN_08838d14(&local_20,*param_1);
    *puVar1 = local_20;
    puVar1[1] = local_1c;
    puVar1[2] = local_18;
    puVar1[0xd] = puVar1[0xd] & 0xfffffdff;
  }
  return;
}

