/* Entry 0x08890E14 | file offset 0x0008DDEC | FUN_08890e14 | bytes 380 */

undefined4 FUN_08890e14(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_c0 [12];
  ushort local_b4;
  ushort local_b2;
  undefined1 auStack_68 [44];
  short local_3c;
  undefined2 local_30;
  char local_2b;
  
  if (*param_1 == '\0') {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_088916a4(param_1,auStack_c0);
    if (iVar1 == 0) {
      iVar3 = FUN_08891b8c(param_1,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x18));
      iVar7 = 0;
      iVar4 = FUN_088912d0(param_1);
      iVar8 = 0;
      iVar1 = -1;
      if (local_b2 != 0) {
        do {
          iVar5 = FUN_08891894(param_1,auStack_68,(uint)local_b4 + iVar8);
          if (iVar5 == 0) {
            if (iVar3 == 1) {
              if ((local_3c == 6) && (iVar8 != 0)) {
                iVar7 = iVar7 + 1;
              }
              if (iVar7 != *(int *)(param_1 + 0x1c)) {
                uVar6 = (uint)local_b2;
                goto LAB_08890f4c;
              }
            }
            if (iVar4 == 1) {
              if (-1 < local_2b) {
                iVar1 = (int)local_2b;
              }
              iVar5 = FUN_08891900(param_1);
              if (iVar1 != iVar5) {
                uVar6 = (uint)local_b2;
                goto LAB_08890f4c;
              }
            }
            FUN_08890fc4(param_1,local_30);
            uVar6 = (uint)local_b2;
          }
          else {
            uVar6 = (uint)local_b2;
          }
LAB_08890f4c:
          iVar8 = iVar8 + 1;
        } while (iVar8 < (int)uVar6);
      }
      uVar2 = 0;
    }
    else {
      uVar2 = 0xfffffffe;
    }
  }
  return uVar2;
}

