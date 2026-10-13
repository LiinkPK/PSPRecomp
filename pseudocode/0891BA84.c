/* Entry 0x0891BA84 | file offset 0x00118A5C | FUN_0891ba84 | bytes 592 */

int FUN_0891ba84(int param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (param_2 == '\0') {
    FUN_0891c3f4(param_1);
  }
  iVar1 = 0;
  if (((*(uint *)(param_1 + 0x2a44) & 1) == 0) && (iVar1 = FUN_0891c098(param_1), iVar1 == 0)) {
    *(uint *)(param_1 + 0x2a44) = *(uint *)(param_1 + 0x2a44) | 1;
  }
  if (((iVar1 == 0) && ((*(uint *)(param_1 + 0x2a44) & 2) == 0)) &&
     (iVar1 = FUN_0891c124(param_1,0), iVar1 == 0)) {
    *(uint *)(param_1 + 0x2a44) = *(uint *)(param_1 + 0x2a44) | 2;
  }
  if (iVar1 == 0) {
    iVar5 = 1;
    iVar1 = 0;
    do {
      iVar3 = 0;
      iVar4 = 0;
      do {
        if (*(short *)(param_1 + iVar3 * 0xea8 + 0x68 +
                      *(char *)(param_1 + iVar4 + iVar3 * -3 + 0x2a05) * 0x2e8) == -1) {
          FUN_0891c7e8(param_1,1 - iVar3,0,0,0,0,1);
          iVar1 = FUN_0891c158(param_1,(int)*(char *)(param_1 + 0x2a20),
                               (int)*(char *)(param_1 + 0x2a21));
          iVar5 = 0;
          break;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar3 * 0x10;
      } while (iVar3 < 2);
      if ((iVar5 == 1) || (iVar1 == 1)) goto LAB_0891bc8c;
    } while ((*(uint *)(param_1 + 0x2a44) & 4) == 0);
    uVar2 = FUN_0891a44c(param_1 + 0x27e0);
    iVar1 = FUN_0891c1a4(param_1,uVar2);
    if (iVar1 == 0) {
      iVar1 = FUN_0891c1fc(param_1,0);
    }
    if (iVar1 == 0) {
      FUN_0891c330(param_1);
    }
LAB_0891bc8c:
    if (iVar5 == 1) {
      FUN_0891cfc4(param_1,param_2,param_3);
      *(uint *)(param_1 + 0x2a44) = *(uint *)(param_1 + 0x2a44) | 0x10;
    }
  }
  return iVar5;
}

