/* Entry 0x0891468C | file offset 0x00111664 | FUN_0891468c | bytes 308 */

void FUN_0891468c(int param_1)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  FUN_08933c28(DAT_089d85e8);
  psVar1 = (short *)FUN_0891705c(0xffffffff);
  if (*(int *)(param_1 + 0x5c) == (int)*psVar1) {
    *(undefined1 *)(param_1 + 0x7e9) = 1;
    func_0x08b49cf4(*(undefined4 *)(param_1 + 0x570));
    iVar2 = FUN_088f47e0(4);
    iVar3 = FUN_088f47e0(1);
    iVar4 = FUN_088f47e0(2);
    iVar5 = 0;
    do {
      FUN_0887309c(iVar5,iVar2 == 0,iVar3 == 0,iVar4 == 0,0);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
    iVar2 = FUN_088d4c5c();
    FUN_08873d34((float)iVar2,2,0,0,0,2);
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    FUN_08873db0(&local_30,2);
    FUN_08914bc8(param_1);
    FUN_08914b64(param_1,2);
  }
  else {
    FUN_08914fd8(param_1);
  }
  return;
}

