/* Entry 0x08864760 | file offset 0x00061738 | FUN_08864760 | bytes 152 */

int FUN_08864760(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                char param_5)

{
  int iVar1;
  
  do {
    FUN_08864b68(param_1,3);
    iVar1 = sceIoRead(param_2,param_3,param_4);
    if (-1 < iVar1) {
      return iVar1;
    }
  } while (param_5 != '\x01');
  return 0;
}

