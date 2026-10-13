/* Entry 0x089040A4 | file offset 0x0010107C | FUN_089040a4 | bytes 52 */

int FUN_089040a4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x184))) {
    iVar1 = param_1 + 0x124 + param_2 * 6;
  }
  return iVar1;
}

