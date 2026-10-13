/* Entry 0x08811768 | file offset 0x0000E740 | FUN_08811768 | bytes 336 */

void FUN_08811768(int *param_1,undefined4 param_2,undefined1 param_3)

{
  bool bVar1;
  int iVar2;
  undefined1 uVar3;
  ushort uVar4;
  int iVar5;
  short *psVar6;
  
  iVar2 = FUN_08811a24(DAT_089d47a0);
  param_1[1] = iVar2;
  *(undefined1 *)((int)param_1 + 0xe) = param_3;
  *(undefined1 *)(param_1 + 3) = 0xff;
  iVar5 = 0;
  bVar1 = true;
  psVar6 = (short *)(iVar2 + 0x1c);
  do {
    if (*psVar6 < 0) {
      *(char *)((int)param_1 + 0xd) = (char)iVar5;
      break;
    }
    iVar5 = iVar5 + 1;
    bVar1 = iVar5 < 4;
    psVar6 = psVar6 + 10;
  } while (bVar1);
  uVar3 = 4;
  if (bVar1) {
    uVar3 = (undefined1)iVar5;
  }
  *(undefined1 *)((int)param_1 + 0xd) = uVar3;
  *(char *)((int)param_1 + 0xd) = *(char *)((int)param_1 + 0xd) + -1;
  FUN_0882fa10(0,0,*param_1 + 0x130,(int)*(short *)(iVar2 + 2),0);
  *(undefined2 *)(*param_1 + 0x540) = *(undefined2 *)(param_1[1] + 2);
  uVar4 = *(ushort *)(param_1[1] + 6);
  if ((uVar4 & 2) != 0) {
    FUN_08811668(0,param_1,(int)*(short *)(param_1[1] + 2));
    uVar4 = *(ushort *)(param_1[1] + 6);
  }
  iVar2 = *param_1;
  if ((uVar4 & 1) != 0) {
    iVar5 = FUN_088374b0(iVar2);
    iVar2 = *param_1;
    if (iVar5 != 0) {
      param_1[6] = param_1[6] | 2;
    }
  }
  iVar2 = func_0x08b30898(iVar2);
  param_1[4] = (uint)*(ushort *)(iVar2 + 0x1e);
  iVar2 = func_0x08b30898(*param_1);
  param_1[5] = *(int *)(iVar2 + 0x3c);
  return;
}

