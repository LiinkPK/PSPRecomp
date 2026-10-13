/* Entry 0x0883834C | file offset 0x00035324 | FUN_0883834c | bytes 340 */

void FUN_0883834c(int param_1,int param_2,undefined1 param_3,char param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  if ((*(uint *)(param_1 + 0x388) & 0x20000000) == 0) {
    iVar1 = FUN_08842828(*(undefined4 *)(param_1 + 0x2f8),0,0);
    puVar2 = (undefined4 *)FUN_088a24d4(1,param_2 + iVar1,1,0);
    if (puVar2 != (undefined4 *)0x0) {
      if (param_4 == '\0') {
        puVar2[0x15] = param_1 + 0x510;
      }
      else {
        FUN_08838d14(&local_30,param_1);
        *puVar2 = local_30;
        puVar2[0xd] = puVar2[0xd] & 0xfffffdff;
        puVar2[1] = local_2c;
        puVar2[2] = local_28;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[0xd] = puVar2[0xd] & 0xfffffdff;
        FUN_088a1f6c(puVar2,param_3);
      }
    }
  }
  return;
}

