/* Entry 0x08935B50 | file offset 0x00132B28 | FUN_08935b50 | bytes 100 */

int FUN_08935b50(byte *param_1,byte *param_2,int param_3)

{
  uint uVar1;
  
  if (param_3 == 0) {
    return 0;
  }
  do {
    if (param_3 == 0) {
      uVar1 = (uint)*param_1;
LAB_08935ba8:
      return uVar1 - *param_2;
    }
    if (*param_1 != *param_2) {
      uVar1 = (uint)*param_1;
      goto LAB_08935ba8;
    }
    if (param_3 + -1 == 0) {
      uVar1 = (uint)*param_1;
      goto LAB_08935ba8;
    }
    if (*param_1 == 0) {
      uVar1 = (uint)*param_1;
      goto LAB_08935ba8;
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
  } while( true );
}

