/* Entry 0x08908D30 | file offset 0x00105D08 | FUN_08908d30 | bytes 60 */

bool FUN_08908d30(int param_1)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x23c) == 2;
  if (bVar1) {
    *(undefined1 *)(param_1 + 0x25c) = 0;
    FUN_08908fdc(param_1,3);
  }
  return bVar1;
}

