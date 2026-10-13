/* Entry 0x088D4928 | file offset 0x000D1900 | FUN_088d4928 | bytes 48 */

bool FUN_088d4928(int param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 4) != param_2;
  *(int *)(param_1 + 4) = param_2;
  if (bVar1) {
    FUN_088d47f4();
  }
  return bVar1;
}

