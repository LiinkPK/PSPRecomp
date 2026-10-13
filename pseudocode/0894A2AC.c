/* Entry 0x0894A2AC | file offset 0x00147284 | FUN_0894a2ac | bytes 320 */

void FUN_0894a2ac(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  
  *(int *)(param_1 + 0x88) = param_2;
  for (iVar1 = *(int *)(param_2 + param_3 * 4 + 0x1b8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14))
  {
    iVar4 = (int)*(float *)(iVar1 + 0x30);
    if ((*(ushort *)(iVar1 + 2) & 0x10) != 0) {
      iVar2 = *(int *)(iVar1 + 0x40);
      uVar3 = (uint)*(ushort *)(iVar2 + 0xe);
      FUN_0894a3ec(param_1,iVar1,param_3,uVar3 - 1);
      FUN_0894ba60((float)uVar3,param_1,iVar1,5,0);
      *(ushort *)(iVar1 + 2) = *(ushort *)(iVar1 + 2) | 2;
      *(ushort *)(iVar1 + 2) = *(ushort *)(iVar1 + 2) & 0xffef;
      fVar5 = (float)((int)(iVar4 - uVar3) %
                     (int)((uint)*(ushort *)(iVar2 + 0xe) - (uint)*(ushort *)(iVar2 + 0xc))) +
              (float)*(ushort *)(iVar2 + 0xc) + (*(float *)(iVar1 + 0x30) - (float)iVar4);
      iVar4 = (int)fVar5;
      *(float *)(iVar1 + 0x30) = fVar5;
    }
    FUN_0894a3ec(param_1,iVar1,param_3,iVar4);
  }
  return;
}

