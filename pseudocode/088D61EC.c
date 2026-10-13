/* Entry 0x088D61EC | file offset 0x000D31C4 | FUN_088d61ec | bytes 104 */

void FUN_088d61ec(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      if ((*(ushort *)(param_1 + 1) & 1) == 0) {
        FUN_088d617c(*param_1);
      }
      iVar1 = iVar1 + 1;
      param_1 = param_1 + 2;
    } while (iVar1 < param_2);
  }
  return;
}

