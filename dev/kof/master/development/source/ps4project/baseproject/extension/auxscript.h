#pragma once

long extension::auxscript::AuxCheckOption<int,13>(lua_State * L, long narg, const std::pair<char const *,int>[52] & table, long defaultValue); // 0x1402B05D0
Scaleform::Key::Code extension::auxscript::AuxCheckOption<enum Scaleform::Key::Code,114>(lua_State * L, long narg, const std::pair<char const *,enum Scaleform::Key::Code>[456] & table, Scaleform::Key::Code defaultValue); // 0x1402B00B0
extension::GFXIText::HAlignment extension::auxscript::AuxCheckOption<enum extension::GFXIText::HAlignment,7>(lua_State * L, long narg, const std::pair<char const *,enum extension::GFXIText::HAlignment>[28] & table, extension::GFXIText::HAlignment defaultValue); // 0x1402B06A0
Scaleform::GFx::FontMap::MapFontFlags extension::auxscript::AuxCheckOption<enum Scaleform::GFx::FontMap::MapFontFlags,8>(lua_State * L, long narg, const std::pair<char const *,enum Scaleform::GFx::FontMap::MapFontFlags>[32] & table, Scaleform::GFx::FontMap::MapFontFlags defaultValue); // 0x1402B02D0
extension::GFXIMultiControllerMode::Spec extension::auxscript::AuxCheckOption<enum extension::GFXIMultiControllerMode::Spec,3>(lua_State * L, long narg, const std::pair<char const *,enum extension::GFXIMultiControllerMode::Spec>[12] & table, extension::GFXIMultiControllerMode::Spec defaultValue); // 0x1402B0000
unsigned long long extension::auxscript::AuxCheckOption<unsigned __int64,9>(lua_State * L, long narg, const std::pair<char const *,unsigned __int64>[36] & table, unsigned long long defaultValue); // 0x1402B0520
extension::SoundConstants::LoadSpec extension::auxscript::AuxCheckOption<enum extension::SoundConstants::LoadSpec,4>(lua_State * L, long narg, const std::pair<char const *,enum extension::SoundConstants::LoadSpec>[16] & table, extension::SoundConstants::LoadSpec defaultValue); // 0x1402BC7F0
extension::SoundConstants::PlayTag extension::auxscript::AuxCheckOption<enum extension::SoundConstants::PlayTag,6>(lua_State * L, long narg, const std::pair<char const *,enum extension::SoundConstants::PlayTag>[24] & table, extension::SoundConstants::PlayTag defaultValue); // 0x1402BC880
void extension::auxscript::UDHelper<extension::BasicFutureObject<extension::AsyncFileImage,void> >::MakeMeta(lua_State * L, luaL_Reg * reg); // 0x140270370
void extension::auxscript::UDHelper<extension::RefCountablePtr<extension::AsyncContent<CharaProjectData> > >::MakeMeta(lua_State * L, luaL_Reg * reg); // 0x1402A98E0
void extension::auxscript::UDHelper<extension::RefCountablePtr<extension::AsyncContent<StageProjectData> > >::MakeMeta(lua_State * L, luaL_Reg * reg); // 0x1402A95A0
void extension::auxscript::UDHelper<extension::GFXIText::FilterParams>::MakeMeta(lua_State * L, luaL_Reg * reg); // 0x1402AECF0
void extension::auxscript::UDHelper<extension::BasicFutureObject<extension::GFXIMovieData,void> >::MakeMeta(lua_State * L, luaL_Reg * reg); // 0x1402AF570
void extension::auxscript::UDHelper<extension::GFXIMovie>::MakeMeta(lua_State * L, luaL_Reg * reg); // 0x1402AF390
void extension::auxscript::UDHelper<extension::GFXIFontManager::LanguageConfig>::MakeMeta(lua_State * L, luaL_Reg * reg); // 0x1402AF1B0
void extension::auxscript::UDHelper<extension::exsound_detail::SoundBankMediaDefinition>::MakeMeta(lua_State * L, luaL_Reg * reg); // 0x1402B8CC0
bool extension::auxscript::UDHelper<extension::GFXIText::FilterParams>::IsNilMeta(lua_State * L); // 0x1402AEC60
extension::BasicFutureObject<extension::AsyncFileImage,void> & extension::auxscript::UDHelper<extension::BasicFutureObject<extension::AsyncFileImage,void> >::New<char [23]>(lua_State * L, const char[23] & <args_0>); // 0x140270610
extension::RefCountablePtr<extension::AsyncContent<CharaProjectData> > & extension::auxscript::UDHelper<extension::RefCountablePtr<extension::AsyncContent<CharaProjectData> > >::New<extension::AsyncContent<CharaProjectData> * __ptr64>(lua_State * L, extension::AsyncContent<CharaProjectData> * & <args_0>); // 0x1402AA200
extension::RefCountablePtr<extension::AsyncContent<StageProjectData> > & extension::auxscript::UDHelper<extension::RefCountablePtr<extension::AsyncContent<StageProjectData> > >::New<extension::AsyncContent<StageProjectData> * __ptr64>(lua_State * L, extension::AsyncContent<StageProjectData> * & <args_0>); // 0x1402AA360
extension::GFXIText::FilterParams & extension::auxscript::UDHelper<extension::GFXIText::FilterParams>::New<>(lua_State * L); // 0x1402B03A0
extension::GFXIFontManager::LanguageConfig & extension::auxscript::UDHelper<extension::GFXIFontManager::LanguageConfig>::New<>(lua_State * L); // 0x1402B0180
extension::BasicFutureObject<extension::GFXIMovieData,void> & extension::auxscript::UDHelper<extension::BasicFutureObject<extension::GFXIMovieData,void> >::New<char const * __ptr64>(lua_State * L, const char * & <args_0>); // 0x1402AFC20
extension::GFXIMovie & extension::auxscript::UDHelper<extension::GFXIMovie>::New<extension::GFXIMovie>(lua_State * L, const extension::GFXIMovie & <args_0>); // 0x1402AFE90
extension::exsound_detail::SoundBankMediaDefinition & extension::auxscript::UDHelper<extension::exsound_detail::SoundBankMediaDefinition>::New<extension::exsound_detail::SoundBankMediaDefinition>(lua_State * L, const extension::exsound_detail::SoundBankMediaDefinition & <args_0>); // 0x1402BC900
long extension::auxscript::UDHelper<extension::BasicFutureObject<extension::AsyncFileImage,void> >::Lfn_gc(lua_State * L); // 0x140270550
long extension::auxscript::UDHelper<extension::RefCountablePtr<extension::AsyncContent<CharaProjectData> > >::Lfn_gc(lua_State * L); // 0x1402A9DC0
long extension::auxscript::UDHelper<extension::RefCountablePtr<extension::AsyncContent<StageProjectData> > >::Lfn_gc(lua_State * L); // 0x1402A9CE0
long extension::auxscript::UDHelper<extension::GFXIText::FilterParams>::Lfn_gc(lua_State * L); // 0x1402AF7E0
long extension::auxscript::UDHelper<extension::BasicFutureObject<extension::GFXIMovieData,void> >::Lfn_gc(lua_State * L); // 0x1402AFAE0
long extension::auxscript::UDHelper<extension::GFXIMovie>::Lfn_gc(lua_State * L); // 0x1402AFA00
long extension::auxscript::UDHelper<extension::GFXIFontManager::LanguageConfig>::Lfn_gc(lua_State * L); // 0x1402AF940
long extension::auxscript::UDHelper<extension::exsound_detail::SoundBankMediaDefinition>::Lfn_gc(lua_State * L); // 0x1402B9CE0
long extension::auxscript::UDHelper<extension::BasicFutureObject<extension::AsyncFileImage,void> >::Lfn_tostring(lua_State * L); // 0x140270530
long extension::auxscript::UDHelper<extension::RefCountablePtr<extension::AsyncContent<CharaProjectData> > >::Lfn_tostring(lua_State * L); // 0x1402A9DA0
long extension::auxscript::UDHelper<extension::RefCountablePtr<extension::AsyncContent<StageProjectData> > >::Lfn_tostring(lua_State * L); // 0x1402A9CC0
long extension::auxscript::UDHelper<extension::GFXIText::FilterParams>::Lfn_tostring(lua_State * L); // 0x1402AF7C0
long extension::auxscript::UDHelper<extension::BasicFutureObject<extension::GFXIMovieData,void> >::Lfn_tostring(lua_State * L); // 0x1402AFAC0
long extension::auxscript::UDHelper<extension::GFXIMovie>::Lfn_tostring(lua_State * L); // 0x1402AF9E0
long extension::auxscript::UDHelper<extension::GFXIFontManager::LanguageConfig>::Lfn_tostring(lua_State * L); // 0x1402AF920
long extension::auxscript::UDHelper<extension::exsound_detail::SoundBankMediaDefinition>::Lfn_tostring(lua_State * L); // 0x1402B9CC0