/* Entry 0x088385B0 | file offset 0x00035588 | FUN_088385b0 | bytes 280 */

void FUN_088385b0(int param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar1 = FUN_0886b1dc(*(undefined4 *)(param_1 + 0x394));
  if (iVar1 == param_2) {
    iVar1 = FUN_08842828(*(undefined4 *)(param_1 + 0x2f8),0,0);
    puVar2 = (undefined4 *)FUN_088a24d4(1,param_3 + iVar1,1,0);
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
      }
    }
  }
  return;
}

