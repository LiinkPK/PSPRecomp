/* Entry 0x088A5378 | file offset 0x000A2350 | FUN_088a5378 | bytes 312 */

int FUN_088a5378(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_120 [256];
  int local_20;
  
  iVar1 = FUN_088a59cc();
  if (iVar1 == 0) {
    iVar1 = FUN_088a5a50(param_1);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      FUN_0893476c(auStack_120,"effect/%s.mpk",param_2);
      local_20 = FUN_08862c40(auStack_120,1);
      if (local_20 == 0) {
        iVar1 = 0;
      }
      else {
        uVar2 = FUN_088a51c0(local_20,auStack_120);
        uVar3 = FUN_088a5208(uVar2);
        FUN_08862854(auStack_120,uVar3,local_20,1);
        iVar4 = FUN_088a5914(param_1,iVar1,uVar3);
        if (iVar4 == 0) {
          iVar1 = 0;
        }
        else {
          *(undefined1 *)(iVar1 + 0x38) = 0;
          FUN_08935af8(iVar1 + 0x38,param_2,0x1f);
          *(undefined4 *)(iVar1 + 0x58) = uVar2;
          *(undefined4 *)(iVar1 + 0x60) = 1;
          *(undefined1 *)(iVar1 + 100) = 1;
        }
      }
    }
  }
  else {
    *(int *)(iVar1 + 0x60) = *(int *)(iVar1 + 0x60) + 1;
  }
  return iVar1;
}

