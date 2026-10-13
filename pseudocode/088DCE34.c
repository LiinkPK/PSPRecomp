/* Entry 0x088DCE34 | file offset 0x000D9E0C | FUN_088dce34 | bytes 56 */

int FUN_088dce34(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0x66);
  *(undefined2 *)(param_1 + 100) = 1;
  FUN_088dcd60();
  return (int)sVar1;
}

