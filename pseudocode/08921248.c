/* Entry 0x08921248 | file offset 0x0011E220 | FUN_08921248 | bytes 60 */

void FUN_08921248(int param_1,undefined4 param_2)

{
  short *psVar1;
  
  psVar1 = (short *)FUN_088470dc(param_2,1,0);
  **(int **)(param_1 + 0xc) = (int)*psVar1;
  return;
}

