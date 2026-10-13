/* Entry 0x088E0714 | file offset 0x000DD6EC | FUN_088e0714 | bytes 156 */

void FUN_088e0714(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_0885c6cc(*(undefined4 *)(param_2 + 4),param_1,0x40,0,1,0);
  uVar3 = *(undefined4 *)(param_2 + 0x162c);
  iVar2 = param_2 + *(short *)(param_2 + 0x17ac) * 4;
  *(undefined4 *)(iVar2 + 0x170c) = uVar1;
  *(undefined4 *)(iVar2 + 0x175c) = param_1;
  FUN_08935524(uVar1,uVar3,param_1);
  FUN_088fe944(*(int *)(param_2 + 8) + *(short *)(param_2 + 0x17ac) * 0x40 + 0x48c,
               *(undefined4 *)(param_2 + 0x162c),param_1);
  *(undefined1 *)(param_2 + 0x17ae) = 0;
  *(short *)(param_2 + 0x17ac) = *(short *)(param_2 + 0x17ac) + 1;
  return;
}

