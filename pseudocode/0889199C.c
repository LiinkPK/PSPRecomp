/* Entry 0x0889199C | file offset 0x0008E974 | FUN_0889199c | bytes 496 */

undefined4 FUN_0889199c(char *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_100 [12];
  ushort local_f4;
  ushort local_f2;
  undefined4 local_a8 [11];
  short local_7c;
  ushort local_70;
  char local_6b;
  undefined4 local_68;
  undefined4 local_64;
  char local_38;
  
  if (*param_1 == '\0') {
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = FUN_088916a4(param_1,auStack_100);
    if (iVar2 == 0) {
      local_38 = FUN_08891b8c(param_1,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x18));
      iVar9 = 0;
      iVar4 = FUN_088912d0(param_1);
      iVar8 = 0;
      iVar2 = -1;
      if (local_f2 != 0) {
        do {
          iVar5 = FUN_08891894(param_1,local_a8,(uint)local_f4 + iVar8);
          if (iVar5 == 0) {
            if (iVar4 == 1) {
              if (-1 < local_6b) {
                iVar2 = (int)local_6b;
              }
              iVar5 = FUN_08891900(param_1);
              if (iVar2 != iVar5) {
                uVar6 = (uint)local_f2;
                goto LAB_08891b48;
              }
            }
            if (local_38 == '\x01') {
              if ((local_7c == 6) && (iVar8 != 0)) {
                iVar9 = iVar9 + 1;
              }
              if (iVar9 != *(int *)(param_1 + 0x1c)) {
                uVar6 = (uint)local_f2;
                goto LAB_08891b48;
              }
            }
            bVar1 = false;
            iVar5 = 0;
            pcVar7 = param_1;
            do {
              if (*(uint *)(pcVar7 + 0xc) == (uint)local_70) {
                bVar1 = true;
                break;
              }
              iVar5 = iVar5 + 1;
              pcVar7 = pcVar7 + 4;
            } while (iVar5 < 2);
            if (bVar1) {
              uVar6 = (uint)local_f2;
            }
            else {
              func_0x089eb798(&local_68);
              local_68 = *(undefined4 *)(param_1 + 4);
              local_64 = local_a8[0];
              FUN_0888ace4(&local_68);
              func_0x089eb7d0(&local_68,2);
              uVar6 = (uint)local_f2;
            }
          }
          else {
            uVar6 = (uint)local_f2;
          }
LAB_08891b48:
          iVar8 = iVar8 + 1;
        } while (iVar8 < (int)uVar6);
      }
      uVar3 = 0;
    }
    else {
      uVar3 = 0xfffffffe;
    }
  }
  return uVar3;
}

