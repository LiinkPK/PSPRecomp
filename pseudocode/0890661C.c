/* Entry 0x0890661C | file offset 0x001035F4 | FUN_0890661c | bytes 80 */

void FUN_0890661c(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1 + 1;
  puVar1 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0890631c(puVar2,param_2);
    puVar1 = puVar2;
  }
  param_1[0xb4] = puVar1;
  *param_1 = 0;
  return;
}

