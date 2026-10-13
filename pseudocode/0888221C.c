/* Entry 0x0888221C | file offset 0x0007F1F4 | FUN_0888221c | bytes 52 */

void FUN_0888221c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08882390(param_1,0x2000,"SystemTask");
  *(undefined4 *)(param_1 + 0x2000) = uVar1;
  return;
}

