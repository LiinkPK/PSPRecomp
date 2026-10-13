/* Entry 0x08891024 | file offset 0x0008DFFC | FUN_08891024 | bytes 488 */

bool FUN_08891024(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined1 auStack_d0 [12];
  ushort local_c4;
  ushort local_c2;
  undefined1 auStack_78 [44];
  short local_4c;
  char local_3c;
  char local_3b;
  char local_38;
  char local_37;
  
  if (param_2 < 2) {
    iVar1 = FUN_088916a4(param_1,auStack_d0);
    if (iVar1 == 0) {
      local_37 = FUN_08891b8c(param_1,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x18));
      iVar7 = 0;
      local_38 = FUN_088912d0(param_1);
      iVar4 = 0;
      iVar1 = -1;
      bVar6 = false;
      if (local_c2 != 0) {
        bVar5 = bVar6;
        do {
          iVar2 = FUN_08891894(param_1,auStack_78,(uint)local_c4 + iVar4);
          bVar6 = bVar5;
          if (iVar2 == 0) {
            if (local_37 == '\x01') {
              if ((local_4c == 6) && (iVar4 != 0)) {
                iVar7 = iVar7 + 1;
              }
              if (iVar7 != *(int *)(param_1 + 0x1c)) {
                uVar3 = (uint)local_c2;
                goto LAB_088911cc;
              }
            }
            if (local_38 == '\x01') {
              if (-1 < local_3b) {
                iVar1 = (int)local_3b;
              }
              iVar2 = FUN_08891900(param_1);
              if (iVar1 != iVar2) {
                uVar3 = (uint)local_c2;
                goto LAB_088911cc;
              }
            }
            if (local_3c < '\x01') {
              if (-1 < local_3c) {
                bVar6 = param_2 == 0;
              }
            }
            else {
              bVar6 = param_2 == 1;
              if (('\x01' < local_3c) && (bVar6 = bVar5, local_3c < '\x03')) {
                bVar6 = true;
              }
            }
            if (bVar6 == true) {
              return true;
            }
            uVar3 = (uint)local_c2;
          }
          else {
            uVar3 = (uint)local_c2;
          }
LAB_088911cc:
          iVar4 = iVar4 + 1;
          bVar5 = bVar6;
        } while (iVar4 < (int)uVar3);
      }
    }
    else {
      bVar6 = false;
    }
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}

