/* Entry 0x0882F30C | file offset 0x0002C2E4 | FUN_0882f30c | bytes 356 */

void FUN_0882f30c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (*(int *)(param_2 + 0x94) == 0) {
    return;
  }
  uVar4 = 0;
  uVar5 = 0;
  iVar6 = 0;
  iVar7 = 0;
  iVar1 = FUN_0883739c(*(undefined4 *)(param_2 + 0x30));
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = iVar2;
  if (iVar1 != 0) {
    if (*(char *)(iVar2 + 0x542) == '\x01') {
      iVar6 = (int)*(char *)(iVar2 + 0xd60);
      uVar4 = 6;
      iVar7 = (int)*(char *)(iVar2 + 0x1079);
    }
    else {
      if ((*(byte *)(iVar2 + 0x5b2) & 4) != 0) {
        iVar1 = func_0x08b3406c(iVar2);
        iVar3 = *(int *)(param_2 + 0x30);
        if (iVar1 == 0) {
          iVar6 = (int)*(char *)(iVar2 + 0xd60);
          uVar4 = 2;
          iVar7 = (int)*(char *)(iVar2 + 0x1079);
          if ((*(byte *)(iVar2 + 0x5b6) & 0x40) != 0) {
            uVar5 = 1;
          }
          goto LAB_0882f3f8;
        }
      }
      iVar6 = (int)*(char *)(iVar2 + 0xd60);
      uVar4 = 1;
      iVar7 = (int)*(char *)(iVar2 + 0x1079);
    }
  }
LAB_0882f3f8:
  if ((*(char *)(iVar3 + 0x542) == '\x02') && (uVar4 = 1, (*(uint *)(iVar3 + 0x580) & 0x20) != 0)) {
    uVar4 = 3;
  }
  FUN_08828e94(param_1,*(undefined4 *)(param_2 + 0x94),param_2,uVar4,uVar5,iVar6,iVar7);
  return;
}

