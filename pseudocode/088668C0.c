/* Entry 0x088668C0 | file offset 0x00063898 | FUN_088668c0 | bytes 168 */

void FUN_088668c0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = sceGeEdramGetSize();
  iVar2 = sceGeEdramGetAddr();
  uVar3 = FUN_0885c40c(iVar2 + DAT_09b26ab0,iVar1 - DAT_09b26ab0,"GRAPHICS::EDRAM",0x40);
  *(undefined4 *)(param_1 + 0x714) = uVar3;
  FUN_0899b728(FUN_08866528,FUN_08866560);
  FUN_089ba634(FUN_08866528,FUN_08866560,0x10,0);
  FUN_089403d8(FUN_08866528,FUN_08866560);
  FUN_089ab4dc(FUN_08866528,FUN_08866560,0x10,0);
  return;
}

