/* Entry 0x0897EC44 | file offset 0x0017BC1C | FUN_0897ec44 | bytes 396 */

undefined4 FUN_0897ec44(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int local_20;
  int local_1c;
  uint local_18;
  
  piVar2 = (int *)FUN_0898d440(0x30);
  piVar6 = (int *)0x0;
  if (piVar2 != (int *)0x0) {
    *piVar2 = 0;
    piVar2[1] = 0;
    piVar2[2] = 0;
    piVar6 = piVar2;
  }
  *param_4 = piVar6;
  if (piVar6 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar4 = (uint)*(ushort *)(param_3 + 0x38);
    if ((uVar4 == 0) || (uVar4 == 0)) {
      bVar1 = false;
    }
    else {
      local_1c = DAT_09b6f478;
      local_18 = uVar4;
      iVar7 = FUN_08971134(*(undefined4 *)(DAT_09b6f478 + 0x18),uVar4 << 6,&local_20,1);
      if (iVar7 != 0) {
        iVar5 = local_1c + (uint)*(ushort *)(*(int *)(*(int *)(local_1c + 0x88) + 0x1c8) + 0x18) * 4
        ;
        *(int *)(iVar5 + 0xb4) = *(int *)(iVar5 + 0xb4) + local_20;
      }
      *piVar6 = iVar7;
      if (iVar7 == 0) {
        bVar1 = false;
      }
      else {
        piVar6[1] = local_18;
        uVar4 = 0;
        iVar7 = *piVar6;
        if (local_18 != 0) {
          do {
            *(undefined1 *)(iVar7 + 0x30) = 0;
            uVar4 = uVar4 + 1;
            iVar7 = iVar7 + 0x40;
          } while (uVar4 < (uint)piVar6[1]);
        }
        bVar1 = true;
      }
    }
    if (bVar1) {
      FUN_089c3574(piVar6,param_3);
      FUN_089a3bc8(piVar6 + 4,param_3);
      piVar6[7] = 0;
      iVar7 = *(int *)(param_3 + 0x2c);
      piVar6[9] = iVar7;
      piVar6[8] = iVar7;
      piVar6[10] = (uint)*(byte *)(param_3 + 0x3c);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

