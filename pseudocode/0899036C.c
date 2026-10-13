/* Entry 0x0899036C | file offset 0x0018D344 | FUN_0899036c | bytes 324 */

undefined4 FUN_0899036c(float param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float local_40;
  undefined4 local_3c;
  
  if (*(char *)(DAT_089da420 + 0x8f9) == '\0') {
    uVar1 = 0;
    uVar4 = 0;
    iVar3 = 0;
    do {
      iVar2 = *(int *)(DAT_089da420 + iVar3 + 8);
      if ((iVar2 != 0) && (iVar2 = FUN_08992704(iVar2,param_2), iVar2 != 0)) {
        if (param_1 < -1.0) {
          param_1 = -1.0;
        }
        else if (1.0 < param_1) {
          param_1 = 1.0;
        }
        local_3c = 0;
        local_40 = param_1;
        FUN_089912c8(&local_40,&local_3c);
        uVar1 = FUN_089928ac(local_40,local_3c,*(undefined4 *)(DAT_089da420 + iVar3 + 8));
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar4 < 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

