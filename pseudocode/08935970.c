/* Entry 0x08935970 | file offset 0x00132948 | FUN_08935970 | bytes 52 */

int FUN_08935970(byte *param_1,byte *param_2)

{
  byte bVar1;
  
  bVar1 = *param_1;
  do {
    if (bVar1 == 0) {
      bVar1 = *param_1;
LAB_08935998:
      return (uint)bVar1 - (uint)*param_2;
    }
    if (bVar1 != *param_2) {
      bVar1 = *param_1;
      goto LAB_08935998;
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    bVar1 = *param_1;
  } while( true );
}

