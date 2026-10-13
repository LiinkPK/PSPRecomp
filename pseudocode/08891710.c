/* Entry 0x08891710 | file offset 0x0008E6E8 | FUN_08891710 | bytes 388 */

undefined4 FUN_08891710(char *param_1,undefined4 *param_2,uint param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_b0 [12];
  ushort local_a4;
  ushort local_a2;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  undefined4 local_1c;
  
  if (*param_1 == '\0') {
    uVar2 = 0xffffffff;
  }
  else if ((param_2 == (undefined4 *)0x0) || ((int)param_3 < 0)) {
    uVar2 = 0xfffffffe;
  }
  else {
    iVar3 = FUN_088916a4(param_1,auStack_b0);
    if (iVar3 == 0) {
      iVar3 = 0;
      bVar1 = false;
      if (local_a2 != 0) {
        do {
          iVar4 = FUN_08891894(param_1,&local_58,(uint)local_a4 + iVar3);
          if ((iVar4 == 0) && ((local_20 & 0xffff) == param_3)) {
            *param_2 = local_58;
            param_2[1] = local_54;
            param_2[2] = local_50;
            param_2[3] = local_4c;
            param_2[4] = local_48;
            param_2[5] = local_44;
            param_2[6] = local_40;
            param_2[7] = local_3c;
            param_2[8] = local_38;
            param_2[9] = local_34;
            param_2[10] = local_30;
            param_2[0xb] = local_2c;
            param_2[0xc] = local_28;
            param_2[0xd] = local_24;
            param_2[0xe] = local_20;
            param_2[0xf] = local_1c;
            bVar1 = true;
            break;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)(uint)local_a2);
      }
      if (bVar1) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0xfffffffc;
      }
    }
    else {
      uVar2 = 0xfffffffd;
    }
  }
  return uVar2;
}

