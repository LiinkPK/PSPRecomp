/* Entry 0x088A751C | file offset 0x000A44F4 | FUN_088a751c | bytes 48 */

undefined4 FUN_088a751c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(int *)(param_1 + 0xcc) != 0) && ((*(uint *)(*(int *)(param_1 + 0xcc) + 0x18) & 1) == 1)) {
    uVar1 = 1;
  }
  return uVar1;
}

