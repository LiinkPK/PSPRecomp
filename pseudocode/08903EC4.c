/* Entry 0x08903EC4 | file offset 0x00100E9C | FUN_08903ec4 | bytes 280 */

undefined4 FUN_08903ec4(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 < param_1[0x61]) {
    if (*param_1 == -1) {
      uVar1 = 0;
    }
    else {
      iVar2 = sceNetAdhocMatchingCancelTarget(*param_1,(int)param_1 + param_2 * 6 + 0x124);
      if (iVar2 < 0) {
        uVar1 = 0;
      }
      else {
        if ((0 < param_1[0x61]) &&
           (iVar2 = param_1[0x61], param_1[0x61] = iVar2 + -1, param_2 < iVar2 + -1)) {
          do {
            *(undefined1 *)((int)param_1 + param_2 * 6 + 0x124) =
                 *(undefined1 *)((int)param_1 + param_2 * 6 + 0x12a);
            *(undefined1 *)((int)param_1 + param_2 * 6 + 0x125) =
                 *(undefined1 *)((int)param_1 + param_2 * 6 + 299);
            *(undefined1 *)((int)param_1 + param_2 * 6 + 0x126) =
                 *(undefined1 *)((int)param_1 + param_2 * 6 + 300);
            *(undefined1 *)((int)param_1 + param_2 * 6 + 0x127) =
                 *(undefined1 *)((int)param_1 + param_2 * 6 + 0x12d);
            *(undefined1 *)((int)param_1 + param_2 * 6 + 0x128) =
                 *(undefined1 *)((int)param_1 + param_2 * 6 + 0x12e);
            *(undefined1 *)((int)param_1 + param_2 * 6 + 0x129) =
                 *(undefined1 *)((int)param_1 + param_2 * 6 + 0x12f);
            param_2 = param_2 + 1;
          } while (param_2 < param_1[0x61]);
        }
        *(undefined1 *)((int)param_1 + 0x115) = 0;
        uVar1 = 1;
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

