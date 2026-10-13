/* Entry 0x088CC364 | file offset 0x000C933C | FUN_088cc364 | bytes 76 */

int FUN_088cc364(int param_1)

{
  int iVar1;
  
  if (DAT_089d7808 == 0) {
    iVar1 = 0;
  }
  else {
    if ((param_1 < 0) || ((int)(uint)*(ushort *)(DAT_089d7808 + 2) <= param_1)) {
      param_1 = 0;
    }
    iVar1 = DAT_089d780c + param_1 * 8;
  }
  return iVar1;
}

