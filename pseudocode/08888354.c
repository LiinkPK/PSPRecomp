/* Entry 0x08888354 | file offset 0x0008532C | FUN_08888354 | bytes 508 */

void FUN_08888354(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 uStack_7b0;
  undefined1 local_7af;
  undefined1 auStack_7a0 [1892];
  undefined1 local_3c;
  
  iVar6 = 0;
  iVar7 = param_1 + 4;
  puVar8 = &DAT_09afb8a0;
  do {
    if (-1 < *(int *)(param_1 + 0x7f0)) {
      iVar1 = FUN_088470b8(*(int *)(param_1 + 0x7f0));
      iVar2 = FUN_088b3958((int)*(char *)(iVar1 + 6));
      if (iVar2 != 0) {
        iVar3 = FUN_08831320(0x12d0);
        iVar5 = 0;
        if (iVar3 != 0) {
          uVar4 = FUN_08872b48(0);
          func_0x08a61c3c(iVar3,uVar4,iVar1,iVar6 + 2);
          iVar5 = iVar3;
        }
        FUN_088cb9e8(&uStack_7b0);
        FUN_088cba10(&uStack_7b0);
        FUN_088cba54(&uStack_7b0,(int)*(char *)(iVar1 + 6));
        local_7af = *(undefined1 *)((int)puVar8 + 1);
        iVar2 = FUN_088bca50(*(undefined2 *)(iVar2 + 4));
        if (iVar2 == 0) {
          local_3c = *(undefined1 *)(iVar1 + 7);
        }
        else {
          FUN_088bc17c(iVar2,auStack_7a0);
          local_3c = *(undefined1 *)(iVar1 + 7);
        }
        (**(code **)(*(int *)(iVar5 + 0x544) + 0x104))
                  (iVar5 + *(short *)(*(int *)(iVar5 + 0x544) + 0x100),&uStack_7b0,0);
        FUN_08836da4(iVar5,*(undefined4 *)(iVar7 + 0x38));
        *(uint *)(iVar5 + 0x380) = *(uint *)(iVar5 + 0x380) & 0xfffffffd;
        func_0x08b3b3ec(*(undefined4 *)(iVar5 + 0x5ac),1,0);
        func_0x08b2f17c(iVar5);
        FUN_0882fa10(0,0,iVar5 + 0x130,1,0);
        func_0x08b2f2e4(iVar5,3);
        func_0x08a64100(*(undefined4 *)(iVar5 + 0x5c4),0);
        (**(code **)(*(int *)(iVar5 + 0x544) + 0x164))
                  (iVar5 + *(short *)(*(int *)(iVar5 + 0x544) + 0x160));
        *(undefined4 *)(iVar5 + 0x1108) = *(undefined4 *)(param_1 + 0x38);
        *(int *)(*(int *)(param_1 + 0x38) + 0x1108) = iVar5;
        *(int *)(param_1 + 0x40) = iVar5;
      }
    }
    iVar6 = iVar6 + 1;
    puVar8 = puVar8 + 0x418;
    param_1 = param_1 + 4;
    iVar7 = iVar7 + -4;
  } while (iVar6 < 2);
  return;
}

