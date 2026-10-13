/* Entry 0x088A63CC | file offset 0x000A33A4 | FUN_088a63cc | bytes 172 */

void FUN_088a63cc(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_0885ea88(param_1 + 0x10);
  iVar3 = param_1 + 0xd0;
  uVar2 = FUN_088735c4(iVar3);
  FUN_08941174(*(undefined4 *)(param_1 + 8),uVar1,uVar2);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar1 = FUN_0885ea90(param_1 + 0x10);
  FUN_08941194(uVar2,uVar1);
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = FUN_0887357c(iVar3);
  uVar4 = FUN_08873584(iVar3);
  FUN_089411b8(uVar2,uVar4,uVar1);
  return;
}

