/* Entry 0x0885C620 | file offset 0x000595F8 | FUN_0885c620 | bytes 40 */

undefined4 FUN_0885c620(uint param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 <= param_2) && (param_2 < *(uint *)(param_1 + 4))) {
    uVar1 = 1;
  }
  return uVar1;
}

